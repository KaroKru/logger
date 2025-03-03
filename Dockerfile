FROM ubuntu:latest

WORKDIR /app

RUN apt-get update && apt-get install -y \
    cmake \
    make \
    g++ \
    git \
    clang-format \
    lcov 

COPY . .

RUN mkdir build && cd build \
    && cmake -G "Unix Makefiles" .. \
    && make

CMD ["./build/calc"]
