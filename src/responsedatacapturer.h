#ifndef RESPONSEDATACAPTURER_H
#define RESPONSEDATACAPTURER_H

#include <QNetworkReply>

class ResponseDataCapturer {
    private:
        QByteArray m_data;
        bool m_shouldCaptureResponseBody;
    public:
        ResponseDataCapturer(bool shouldCaptureResponseBody);
        QString getCapturedBody();
        void onReadyForRead(QNetworkReply* response);
};

#endif //RESPONSEDATACAPTURER_H
