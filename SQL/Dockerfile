FROM python:3.9

WORKDIR /app

COPY ./src/requirements.txt /app/requirements.txt
COPY ./src/populate.py /app/populate_db.py

RUN pip install --no-cache-dir -r /app/requirements.txt
