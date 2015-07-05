/* web_DDPServer_Session.c
 *
 * This file contains the implementation for the generated interface.
 *
 * Don't mess with the begin and end tags, since these will ensure that modified
 * code in interface functions isn't replaced when code is re-generated.
 */

#include "web.h"

/* $header() */
cx_void web_DDPServer_Session_nosub(web_DDPServer_Session _this, cx_string id) {
    int msgLength = snprintf(NULL, 0, "{\"msg\":\"nosub\",\"id\":\"%s\"}", id);
    cx_string msg = cx_malloc(msgLength + 1);
    sprintf(msg, "{\"msg\":\"nosub\",\"id\":\"%s\"}", id);
    web_SockJsServer_Connection_send(_this->conn, msg);
    cx_dealloc(msg);    
}
/* $end */

/* ::cortex::web::DDPServer::Session::connected() */
cx_void web_DDPServer_Session_connected(web_DDPServer_Session _this) {
/* $begin(::cortex::web::DDPServer::Session::connected) */
    int msgLength = snprintf(NULL, 0, "{\"msg\":\"connected\",\"session\":\"%s\"}", cx_nameof(_this));
    cx_string msg = cx_malloc(msgLength + 1);
    sprintf(msg, "{\"msg\":\"connected\",\"session\":\"%s\"}", cx_nameof(_this));
    web_SockJsServer_Connection_send(_this->conn, msg);
    cx_dealloc(msg);
/* $end */
}

/* ::cortex::web::DDPServer::Session::construct() */
cx_int16 web_DDPServer_Session_construct(web_DDPServer_Session _this) {
/* $begin(::cortex::web::DDPServer::Session::construct) */

    _this->collections = cx_void__declare(_this, "__collections");
    _this->subscriptions = cx_void__declare(_this, "__subscriptions");

    return 0;
/* $end */
}

/* ::cortex::web::DDPServer::Session::failed(::cortex::web::SockJsServer::Connection conn) */
cx_void web_DDPServer_Session_failed(web_SockJsServer_Connection conn) {
/* $begin(::cortex::web::DDPServer::Session::failed) */
    web_SockJsServer_Connection_send(conn, "{\"msg\":\"failed\",\"version\":\"1\"}");
/* $end */
}

/* ::cortex::web::DDPServer::Session::getCollection(string name) */
web_DDPServer_Collection web_DDPServer_Session_getCollection(web_DDPServer_Session _this, cx_string name) {
/* $begin(::cortex::web::DDPServer::Session::getCollection) */
    web_DDPServer_Collection result = NULL;

    if (!(result = cx_lookup(_this->collections, name))) {
        cx_object o = cx_resolve(NULL, name);
        if (o) {
            result = web_DDPServer_Collection__declare(_this->collections, name);
            web_DDPServer_Collection__define(result, o, FALSE, FALSE, FALSE);
        }
    }

    return result;
/* $end */
}

/* ::cortex::web::DDPServer::Session::getSubscription(::cortex::web::DDPServer::Publication pub,string id) */
web_DDPServer_Subscription web_DDPServer_Session_getSubscription(web_DDPServer_Session _this, web_DDPServer_Publication pub, cx_string id) {
/* $begin(::cortex::web::DDPServer::Session::getSubscription) */
    web_DDPServer_Subscription result = NULL;

    if (!(result = cx_lookup(_this->subscriptions, id))) {
        result = web_DDPServer_Subscription__declare(_this->subscriptions, id);
        web_DDPServer_Subscription__define(result, pub, id, TRUE, FALSE, FALSE);
    }

    return result;
/* $end */
}

/* ::cortex::web::DDPServer::Session::pong(string id) */
cx_void web_DDPServer_Session_pong(web_DDPServer_Session _this, cx_string id) {
/* $begin(::cortex::web::DDPServer::Session::pong) */
    if (id) {
        int msgLength = snprintf(NULL, 0, "{\"msg\":\"pong\",\"id\":\"%s\"}", id);
        cx_string msg = cx_malloc(msgLength + 1);
        sprintf(msg, "{\"msg\":\"pong\",\"id\":\"%s\"}", id);
        web_SockJsServer_Connection_send(_this->conn, msg);
        cx_dealloc(msg);
    } else {
        web_SockJsServer_Connection_send(_this->conn, "{\"msg\":\"pong\"}");
    }
/* $end */
}

/* ::cortex::web::DDPServer::Session::sub(string id,string name) */
cx_void web_DDPServer_Session_sub(web_DDPServer_Session _this, cx_string id, cx_string name) {
/* $begin(::cortex::web::DDPServer::Session::sub) */
    web_DDPServer server = web_DDPServer(cx_parentof(cx_parentof(_this)));

    /* Find matching publication */
    web_DDPServer_Publication pub = web_DDPServer_getPublication(server, name);
    if (!pub) {
        web_DDPServer_Session_nosub(_this, id);
    } else {
        web_DDPServer_Subscription sub = web_DDPServer_Session_getSubscription(_this, pub, id);
        if (sub) {
            web_DDPServer_Publication_create(pub, _this, sub);
        } else {
            web_DDPServer_Session_nosub(_this, id);
        }
    }

/* $end */
}