FROM python:3.13.1
RUN apt-get update
RUN apt-get install -y g++
RUN apt-get install -y make
RUN apt-get install -y cmake

WORKDIR /app/code 

COPY . .

CMD ["python", "file.py"]