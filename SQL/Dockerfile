FROM mysql

ENV MYSQL_DATABASE=valland MYSQL_ROOT_PASSWORD=1234 MYSQL_USER=guest MYSQL_PASSWORD=guest

RUN mkdir -p /var/lib/mysql-files
COPY ./src/init.sql /docker-entrypoint-initdb.d/
COPY ./src/population.csv /var/lib/mysql-files/

EXPOSE 3306

ENTRYPOINT [ "docker-entrypoint.sh" ]
CMD ["mysqld"]
