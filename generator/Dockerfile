FROM ubuntu:22.04
RUN apt-get update && apt-get install -y g++ make
WORKDIR /app
COPY main.cpp .
RUN g++ -o generator main.cpp
RUN chmod +x generator
CMD ["./generator"]