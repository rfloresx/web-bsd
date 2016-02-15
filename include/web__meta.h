/* web__meta.h
 *
 * Loads objects in object store.
 * This file contains generated code. Do not modify!
 */

#ifndef corto_web_META_H
#define corto_web_META_H

#include "corto.h"
#include "web__interface.h"

#ifdef __cplusplus
extern "C" {
#endif

CORTO_WEB_EXPORT extern corto_package _o;
extern corto_package web_o;
CORTO_WEB_EXPORT extern corto_class web_DDPServer_o;
CORTO_WEB_EXPORT extern corto_member web_DDPServer_autoPublish_o;
CORTO_WEB_EXPORT extern corto_class web_DDPServer_Collection_o;
CORTO_WEB_EXPORT extern corto_method web_DDPServer_Collection_construct_o;
CORTO_WEB_EXPORT extern corto_member web_DDPServer_Collection_meta_o;
CORTO_WEB_EXPORT extern corto_member web_DDPServer_Collection_obj_o;
CORTO_WEB_EXPORT extern corto_observer web_DDPServer_Collection_onAdded_o;
CORTO_WEB_EXPORT extern corto_observer web_DDPServer_Collection_onChanged_o;
CORTO_WEB_EXPORT extern corto_observer web_DDPServer_Collection_onRemoved_o;
CORTO_WEB_EXPORT extern corto_member web_DDPServer_Collection_scope_o;
CORTO_WEB_EXPORT extern corto_method web_DDPServer_Collection_subscribe_o;
CORTO_WEB_EXPORT extern corto_member web_DDPServer_Collection_value_o;
CORTO_WEB_EXPORT extern corto_method web_DDPServer_construct_o;
CORTO_WEB_EXPORT extern corto_member web_DDPServer_events_o;
CORTO_WEB_EXPORT extern corto_method web_DDPServer_getPublication_o;
CORTO_WEB_EXPORT extern corto_method web_DDPServer_onClose_o;
CORTO_WEB_EXPORT extern corto_method web_DDPServer_onMessage_o;
CORTO_WEB_EXPORT extern corto_method web_DDPServer_onUri_o;
CORTO_WEB_EXPORT extern corto_method web_DDPServer_post_o;
CORTO_WEB_EXPORT extern corto_class web_DDPServer_Publication_o;
CORTO_WEB_EXPORT extern corto_method web_DDPServer_Publication_create_o;
CORTO_WEB_EXPORT extern corto_member web_DDPServer_Publication_scope_o;
CORTO_WEB_EXPORT extern corto_class web_DDPServer_readyEvent_o;
CORTO_WEB_EXPORT extern corto_method web_DDPServer_run_o;
CORTO_WEB_EXPORT extern corto_class web_DDPServer_Session_o;
CORTO_WEB_EXPORT extern corto_member web_DDPServer_Session_collections_o;
CORTO_WEB_EXPORT extern corto_member web_DDPServer_Session_conn_o;
CORTO_WEB_EXPORT extern corto_method web_DDPServer_Session_connected_o;
CORTO_WEB_EXPORT extern corto_method web_DDPServer_Session_construct_o;
CORTO_WEB_EXPORT extern corto_method web_DDPServer_Session_error_o;
CORTO_WEB_EXPORT extern corto_function web_DDPServer_Session_failed_o;
CORTO_WEB_EXPORT extern corto_method web_DDPServer_Session_getCollection_o;
CORTO_WEB_EXPORT extern corto_method web_DDPServer_Session_getSub_o;
CORTO_WEB_EXPORT extern corto_method web_DDPServer_Session_pong_o;
CORTO_WEB_EXPORT extern corto_method web_DDPServer_Session_sub_o;
CORTO_WEB_EXPORT extern corto_member web_DDPServer_Session_subscriptions_o;
CORTO_WEB_EXPORT extern corto_member web_DDPServer_sessions_o;
CORTO_WEB_EXPORT extern corto_class web_DDPServer_Subscription_o;
CORTO_WEB_EXPORT extern corto_member web_DDPServer_Subscription_id_o;
CORTO_WEB_EXPORT extern corto_member web_DDPServer_Subscription_meta_o;
CORTO_WEB_EXPORT extern corto_member web_DDPServer_Subscription_pub_o;
CORTO_WEB_EXPORT extern corto_method web_DDPServer_Subscription_ready_o;
CORTO_WEB_EXPORT extern corto_member web_DDPServer_Subscription_scope_o;
CORTO_WEB_EXPORT extern corto_member web_DDPServer_Subscription_value_o;
CORTO_WEB_EXPORT extern corto_delegate web_handler_o;
CORTO_WEB_EXPORT extern corto_delegate web_messageHandler_o;
CORTO_WEB_EXPORT extern corto_function web_random_o;
CORTO_WEB_EXPORT extern corto_class web_SockJsServer_o;
CORTO_WEB_EXPORT extern corto_class web_SockJsServer_Connection_o;
CORTO_WEB_EXPORT extern corto_member web_SockJsServer_Connection_conn_o;
CORTO_WEB_EXPORT extern corto_member web_SockJsServer_Connection_data_o;
CORTO_WEB_EXPORT extern corto_method web_SockJsServer_Connection_send_o;
CORTO_WEB_EXPORT extern corto_member web_SockJsServer_connections_o;
CORTO_WEB_EXPORT extern corto_method web_SockJsServer_construct_o;
CORTO_WEB_EXPORT extern corto_method web_SockJsServer_destruct_o;
CORTO_WEB_EXPORT extern corto_member web_SockJsServer_exiting_o;
CORTO_WEB_EXPORT extern corto_delegate web_SockJsServer_handler_o;
CORTO_WEB_EXPORT extern corto_delegate web_SockJsServer_messageHandler_o;
CORTO_WEB_EXPORT extern corto_member web_SockJsServer_onClose_o;
CORTO_WEB_EXPORT extern corto_member web_SockJsServer_onMessage_o;
CORTO_WEB_EXPORT extern corto_member web_SockJsServer_onOpen_o;
CORTO_WEB_EXPORT extern corto_member web_SockJsServer_onUri_o;
CORTO_WEB_EXPORT extern corto_method web_SockJsServer_poll_o;
CORTO_WEB_EXPORT extern corto_member web_SockJsServer_pollTimemoutMillis_o;
CORTO_WEB_EXPORT extern corto_member web_SockJsServer_port_o;
CORTO_WEB_EXPORT extern corto_virtual web_SockJsServer_run_o;
CORTO_WEB_EXPORT extern corto_member web_SockJsServer_server_o;
CORTO_WEB_EXPORT extern corto_member web_SockJsServer_thread_o;
CORTO_WEB_EXPORT extern corto_member web_SockJsServer_timeElapsed_o;
CORTO_WEB_EXPORT extern corto_delegate web_SockJsServer_uriHandler_o;
CORTO_WEB_EXPORT extern corto_struct web_SockJsServer_UriRequest_o;
CORTO_WEB_EXPORT extern corto_member web_SockJsServer_UriRequest_conn_o;
CORTO_WEB_EXPORT extern corto_method web_SockJsServer_UriRequest_getVar_o;
CORTO_WEB_EXPORT extern corto_method web_SockJsServer_UriRequest_setHeader_o;
CORTO_WEB_EXPORT extern corto_method web_SockJsServer_UriRequest_setStatus_o;
CORTO_WEB_EXPORT extern corto_method web_SockJsServer_UriRequest_write_o;
CORTO_WEB_EXPORT extern corto_class web_WebSocketConnection_o;
CORTO_WEB_EXPORT extern corto_member web_WebSocketConnection_conn_o;
CORTO_WEB_EXPORT extern corto_member web_WebSocketConnection_data_o;
CORTO_WEB_EXPORT extern corto_method web_WebSocketConnection_send_o;
CORTO_WEB_EXPORT extern corto_class web_WebSocketServer_o;
CORTO_WEB_EXPORT extern corto_method web_WebSocketServer_construct_o;
CORTO_WEB_EXPORT extern corto_method web_WebSocketServer_destruct_o;
CORTO_WEB_EXPORT extern corto_member web_WebSocketServer_exiting_o;
CORTO_WEB_EXPORT extern corto_member web_WebSocketServer_onClose_o;
CORTO_WEB_EXPORT extern corto_member web_WebSocketServer_onMessage_o;
CORTO_WEB_EXPORT extern corto_member web_WebSocketServer_onOpen_o;
CORTO_WEB_EXPORT extern corto_method web_WebSocketServer_poll_o;
CORTO_WEB_EXPORT extern corto_member web_WebSocketServer_pollTimemoutMillis_o;
CORTO_WEB_EXPORT extern corto_member web_WebSocketServer_port_o;
CORTO_WEB_EXPORT extern corto_virtual web_WebSocketServer_run_o;
CORTO_WEB_EXPORT extern corto_member web_WebSocketServer_server_o;
CORTO_WEB_EXPORT extern corto_member web_WebSocketServer_thread_o;

#ifdef __cplusplus
}
#endif
#endif
