FROM alpine:3.21.3

WORKDIR /app

RUN apk add --no-cache \
    cmake \
    make \
    g++ \
    git \
    llvm \
    lcov \
    gzip

COPY . .

RUN mkdir build && cd build \
    && cmake -G "Unix Makefiles" .. \
    && make \
    && ctest -V \
    && lcov --directory . --capture --output-file coverage.info --ignore-errors mismatch \
    && lcov --remove coverage.info 'test/*' '/usr/*' --output-file coverage.info --ignore-errors unused \
    && lcov --list coverage.info

CMD ["./build/calc"]
