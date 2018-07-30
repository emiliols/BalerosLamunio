#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <memory>

#include <QString>

#include "BaseDatos/DAOs/regladao.h"

class QSqlQuery;
class QSqlDatabase;

const QString DATABASE_FILENAME = "LamuñoDatabase";

class DatabaseManager
{
public:
    static DatabaseManager& instance();
    ~DatabaseManager();

    static void debugQuery(const QSqlQuery& query);

protected:
    DatabaseManager(const QString& path = DATABASE_FILENAME);
private:
    std::unique_ptr<QSqlDatabase> mDatabase;

public://Add your DAO's as public members
    ReglaDao regladao;


};

#endif // DATABASEMANAGER_H
