FROM debian:wheezy
MAINTAINER eyal gal

ADD deploy/docker-build.sh /home/docker-build.sh
ENV IS_IN_DOCKER_BUILD="yes"
RUN /home/docker-build.sh

WORKDIR /home/
