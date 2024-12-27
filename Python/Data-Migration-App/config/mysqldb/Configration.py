import mysql.connector

HOST = "localhost"
PORT = "3306"
USER = "root"
PASSWORD = "root"
DATABASE = "pysql"
Connection = None

def get_sqldb_connection():
    global Connection
    if Connection is None:
        # Assign the connection object to the global Connection variable
        Connection = mysql.connector.connect(
            host=HOST,
            port=PORT,
            user=USER,
            password=PASSWORD,
            database=DATABASE
        )
        print('MySQL is Connected !!!')
    return Connection

def close_sqldb_connection():
    global Connection
    if Connection is not None:
        Connection.close()
        Connection = None  # Reset the Connection to None after closing
        print('MySQL is Disconnected !!!')
