#include "responsedatacapturer.h"

ResponseDataCapturer::ResponseDataCapturer(bool shouldCaptureResponseBody): 
    m_shouldCaptureResponseBody(shouldCaptureResponseBody){
    
}

QString ResponseDataCapturer::getCapturedBody(){
    if ( m_shouldCaptureResponseBody ) {
        QString ret(m_data.size(), ' ');
        for (int i = 0; i < m_data.size(); ++i) {
            ret[i] = m_data.at(i);
        }

        return ret;
    }else {
        QString ret("");
        return ret;
    }
}

void ResponseDataCapturer::onReadyForRead(QNetworkReply* response){
    if (m_shouldCaptureResponseBody) {
        QByteArray data = response->readAll();
        m_data += data;
    }
}
