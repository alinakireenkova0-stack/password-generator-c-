FROM ubuntu:22.04
RUN apt-get update && apt-get install -y g++ make
WORKDIR /app
COPY app.cpp .
RUN g++ app.cpp -o service2
CMD ["./service2"]