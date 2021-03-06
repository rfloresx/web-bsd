/* $CORTO_GENERATED
 *
 * Url.c
 *
 * Only code written between the begin and end tags will be preserved
 * when the file is regenerated.
 */

#include <corto/web/client/client.h>

/* $header() */
#include <curl/curl.h>

static int client_Url_onData(
    char *data,
    size_t size,
    size_t nmemb,
    web_client_Url *this)
{
    corto_int32 resultLength = this->response ? strlen(this->response) : 0;
    corto_int32 length = resultLength + size * nmemb;

    corto_string str = malloc(length + 1);

    if (this->response) {
        memcpy(str, this->response, resultLength);
    }

    memcpy(&str[resultLength], data, size * nmemb);

    str[length] = '\0';

    corto_dealloc(this->response);
    this->response = str;

    return size * nmemb;
}
/* $end */

corto_string _web_client_Url_request(
    web_client_Url* this)
{
/* $begin(corto/web/client/Url/request) */
    CURL *conn;
    CURLcode res;

    corto_setstr(&this->response, NULL);

    conn = curl_easy_init();
    if (conn) {
        res = curl_easy_setopt(conn, CURLOPT_URL, this->address);
        if (res != CURLE_OK) {
            corto_seterr("url/request set URL failed: %s\n",
                curl_easy_strerror(res));
            goto error;
        }

        res = curl_easy_setopt(conn, CURLOPT_WRITEFUNCTION, client_Url_onData);
        if (res != CURLE_OK) {
            corto_seterr("url/request set callback failed: %s\n",
                curl_easy_strerror(res));
            goto error;
        }

       res = curl_easy_setopt(conn, CURLOPT_WRITEDATA, this);
       if (res != CURLE_OK) {
           corto_seterr("url/request set writedata failed: %s\n",
               curl_easy_strerror(res));
           goto error;
       }

        res = curl_easy_perform(conn);
        if(res != CURLE_OK) {
            corto_seterr("url/request failed: %s\n",
                curl_easy_strerror(res));
            goto error;
        }

        curl_easy_cleanup(conn);
    }

    return corto_strdup(this->response);
error:
    return NULL;
/* $end */
}
