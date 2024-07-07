#!/bin/bash
export MYSQL_HOME=/home/kira/git/c-study/mysql
echo $MYSQL_HOME
docker rm -f mysql
sudo chown $USER:$USER -R $MYSQL_HOME/data && rm -Rf $MYSQL_HOME/data && mkdir -p $MYSQL_HOME/data && touch $MYSQL_HOME/data/.keep
docker run --name mysql -d \
    -v $MYSQL_HOME/data:/var/lib/mysql \
    -v $MYSQL_HOME/init:/docker-entrypoint-initdb.d/:ro \
    -p 3306:3306 \
    -e MYSQL_USER=kira -e MYSQL_PASSWORD=passw0rd \
    -e MYSQL_ROOT_PASSWORD=passw0rd -e MYSQL_DATABASE=db \
    mysql:8.4
    