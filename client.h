#ifndef CLIENT_H
#define CLIENT_H
#include<QDate>
#include<QString>

class Client
{
public:
    Client();
    QString getFirstname();
    QString getLastname();
    QString getTelnumber();
    QString getEmail();
    QDate   getAddress();


    void setFirstname(QString);
    void setLastname(QString);
    void setTelnumber(QString);
    void setEmail(QString);
    void setAddress(QString);

    private:
    QString firstName,lastName,telNumber,email,address;
    };
};

#endif // CLIENT_H
