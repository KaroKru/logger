FROM alpine:latest

WORKDIR /app

RUN apk add --no-cache \
    cmake \
    make \
    g++ \
    git \
    llvm \
    lcov

COPY . .

RUN mkdir build && cd build \
    && cmake -G "Unix Makefiles" .. \
    && make

CMD ["./build/calc"]
