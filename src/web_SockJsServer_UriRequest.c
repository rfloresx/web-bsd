/* web_SockJsServer_UriRequest.c
 *
 * This file contains the implementation for the generated interface.
 *
 * Don't mess with the begin and end tags, since these will ensure that modified
 * code in interface functions isn't replaced when code is re-generated.
 */

#include "web.h"

/* $header() */
#include "mongoose.h"
/* $end */

/* ::corto::web::SockJsServer::UriRequest::getVar(string id) */
cx_string _web_SockJsServer_UriRequest_getVar(web_SockJsServer_UriRequest *_this, cx_string id) {
/* $begin(::corto::web::SockJsServer::UriRequest::getVar) */
	static char value[256];
    mg_get_var((struct mg_connection *)_this->conn, id, value, sizeof(value));
    return value;
/* $end */
}

/* ::corto::web::SockJsServer::UriRequest::setHeader(string name,string val) */
cx_void _web_SockJsServer_UriRequest_setHeader(web_SockJsServer_UriRequest *_this, cx_string name, cx_string val) {
/* $begin(::corto::web::SockJsServer::UriRequest::setHeader) */
    mg_send_header((struct mg_connection *)_this->conn, name, val);
/* $end */
}

/* ::corto::web::SockJsServer::UriRequest::setStatus(uint16 status) */
cx_void _web_SockJsServer_UriRequest_setStatus(web_SockJsServer_UriRequest *_this, cx_uint16 status) {
/* $begin(::corto::web::SockJsServer::UriRequest::setStatus) */
    mg_send_status((struct mg_connection *)_this->conn, status);
/* $end */
}

/* ::corto::web::SockJsServer::UriRequest::write(string msg) */
cx_void _web_SockJsServer_UriRequest_write(web_SockJsServer_UriRequest *_this, cx_string msg) {
/* $begin(::corto::web::SockJsServer::UriRequest::write) */
    mg_printf_data((struct mg_connection *)_this->conn, "%s", msg);
/* $end */
}
