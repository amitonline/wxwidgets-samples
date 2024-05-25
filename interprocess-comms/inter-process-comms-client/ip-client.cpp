#include "ip-client.h"
#include "ip-client-conn.h"

Client::Client() {}

wxConnectionBase* Client::OnMakeConnection() {
    return new ClientConn();
}
