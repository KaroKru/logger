FROM alpine:3.21.3

WORKDIR /app

RUN apk add --no-cache \
    cmake=3.31.6-r1 \
    make=4.4.1-r2 \
    g++=14.2.0-r5 \
    git=2.48.1-r0 \
    llvm19=19.1.7-r0 \
    lcov=2.0-r3 \
    gzip=1.13-r0
