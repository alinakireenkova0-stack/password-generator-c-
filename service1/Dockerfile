FROM ubuntu:22.04
RUN apt-get update && apt-get install -y g++ make
WORKDIR /app
COPY app.cpp .
RUN g++ -o /app/service1 app.cpp
CMD ["/app/service1"]