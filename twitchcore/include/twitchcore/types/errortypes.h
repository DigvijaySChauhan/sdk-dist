/********************************************************************************************
* Twitch Broadcasting SDK
*
* This software is supplied under the terms of a license agreement with Justin.tv Inc. and
* may not be copied or used except in accordance with the terms of that agreement
* Copyright (c) 2012-2013 Justin.tv Inc.
*********************************************************************************************/

#pragma once

#define TTV_ERROR_CODES\
	/* Warnings */\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_WARNING_START, -1000)\
	DEFINE_TTV_ERROR_CODE(TTV_WRN_MUTEX_LOCKED)\
	DEFINE_TTV_ERROR_CODE(TTV_WRN_FAILED_TO_INIT_MIC_CAPTURE)\
	DEFINE_TTV_ERROR_CODE(TTV_WRN_NOTENOUGHDATA)\
	DEFINE_TTV_ERROR_CODE(TTV_WRN_NOMOREDATA)\
	DEFINE_TTV_ERROR_CODE(TTV_WRN_FRAMES_QUEUEING)\
	DEFINE_TTV_ERROR_CODE(TTV_WRN_MUTEX_NOT_AQUIRED)\
	DEFINE_TTV_ERROR_CODE(TTV_WRN_PREV_GAME_NAME_MATCH_REQUEST_DROPPED)	/*!< A previously pending request for matching game names was dropped in favor of the most recent request.*/\
	DEFINE_TTV_ERROR_CODE(TTV_WRN_DEPRECATED)\
	DEFINE_TTV_ERROR_CODE(TTV_WRN_CHAT_MESSAGE_SPAM_DISCARDED)			/*!< The client is submitting chat messages too quickly and the message was discarded.*/\
	DEFINE_TTV_ERROR_CODE(TTV_WRN_WAIT_TIMEOUT)							/*!< a thread wait timed out*/\
	DEFINE_TTV_ERROR_CODE(TTV_WRN_STREAMINFO_PENDING)					/*!< The stream info is not available from the server, try again in 30 seconds. */\
	/* SUCCESS */\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SUCCESS, 0)\
	/***********/\
	DEFINE_TTV_ERROR_CODE(TTV_EC_UNKNOWN_ERROR)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CANNOT_OPEN_FILE)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_ALREADY_INITIALIZED)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CANNOT_WRITE_TO_FILE)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CANNOT_CREATE_MUTEX)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CANNOT_DESTROY_MUTEX)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_COULD_NOT_TAKE_MUTEX)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_COULD_NOT_RELEASE_MUTEX)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INVALID_MUTEX)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WAIT_TIMED_OUT)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INVALID_ARG)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_NOT_INITIALIZED)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_AUTHENTICATION)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INVALID_AUTHTOKEN)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_MEMORY)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_ALIGN16_REQUIRED)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_UNSUPPORTED_INPUT_FORMAT)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_UNSUPPORTED_OUTPUT_FORMAT)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INVALID_RESOLUTION)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INVALID_FPS)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INVALID_BITRATE)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_FAILED_TO_INIT_SPEAKER_CAPTURE)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_FRAME_QUEUE_FULL)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_HTTPREQUEST_ERROR)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INVALID_CLIENTID)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INVALID_CHANNEL_NAME)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_API_REQUEST_FAILED)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_API_REQUEST_TIMEDOUT)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INVALID_HTTP_REQUEST_PARAMS)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_COINITIALIZE_FAIED)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBAPI_RESULT_INVALID_JSON)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBAPI_RESULT_NO_AUTHTOKEN)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBAPI_RESULT_NO_STREAMKEY)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBAPI_RESULT_NO_CHANNELNAME)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBAPI_RESULT_NO_INGESTS)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBAPI_RESULT_NO_RECORDING_STATUS)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBAPI_RESULT_NO_STREAMINFO)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBAPI_RESULT_INVALID_VIEWERS)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBAPI_RESULT_NO_USERNAME)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBAPI_RESULT_NO_USER_DISPLAY_NAME)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_NO_STREAM_KEY)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_NEED_TO_LOGIN)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INVALID_VIDEOFRAME)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INVALID_BUFFER)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INVALID_CALLBACK)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INVALID_JSON)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_NO_SPSPPS)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_NO_D3D_SUPPORT)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_NO_INGEST_SERVER_AVAILABLE)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INVALID_INGEST_SERVER)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CANNOT_SUSPEND_THREADSYNC)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CANNOT_SIGNAL_THREADSYNC)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INVALID_ENCODER)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_AUDIO_DEVICE_INIT_FAILED)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INVALID_SAMPLERATE)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_X264_INVALID_PRESET)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_X264_INVALID_PROFILE)\
	/*****/\
	DEFINE_TTV_ERROR_CODE(TTV_EC_FLV_UNABLE_TO_OPEN_FILE)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_FLV_FILE_NOT_OPEN)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_FLV_UNSUPPORTED_AUDIO_RATE)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_FLV_UNSUPPORTED_AUDIO_CODEC)\
	/*****/\
	DEFINE_TTV_ERROR_CODE(TTV_EC_RTMP_REJECTED)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_RTMP_WRONG_PROTOCOL_IN_URL)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_RTMP_UNABLE_TO_SEND_DATA)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_RTMP_INVALID_FLV_PACKET)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_RTMP_TIMEOUT)\
	/* Mac audio capture */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_MAC_INPUT_Q_SETUP_FAILED)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_MAC_INPUT_Q_BUFFER_SETUP_FAILED)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_MAC_INPUT_Q_START_FAILED)\
	/*****************************/\
	/* Intel encoder */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INTEL_FAILED_SESSION_INIT)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INTEL_FAILED_VPP_INIT)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INTEL_FAILED_ENCODER_INIT)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INTEL_FAILED_SURFACE_ALLOCATION)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INTEL_FAILED_TASKPOLL_INIT)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INTEL_NO_FREE_TASK)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INTEL_NO_FREE_SURFACE)\
	/*****************************/\
	/* Apple encoder */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_APPLEENCODER_FAILED_START)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_APPLEENCODER_FAILED_FRAME_SUBMISSION)\
	/*****************************/\
	/* lame mp3 encoder */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_LAMEMP3_FAILED_INIT)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_LAMEMP3_FAILED_SHUTDOWN)\
	/*****************************/\
	/* Apple aac encoder */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_APPLEAAC_FAILED_INIT)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_APPLEAAC_FAILED_ENCODING)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_APPLEAAC_FAILED_SHUTDOWN)\
	/*****************************/\
	/* TODO: map mac errors onto winsock errors */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_REQUEST_PENDING)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WSASTARTUP_FAILED)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WSACLEANUP_FAILED)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_SOCKET_GETADDRINFO_FAILED)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_SOCKET_CREATE_FAILED)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_SOCKET_CONNECT_FAILED)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_SOCKET_SEND_ERROR)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_SOCKET_RECV_ERROR)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_SOCKET_IOCTL_ERROR)\
	/*****************************/\
	/* Socket errors */\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_ERR, 1000)\
	/**/\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EINTR, TTV_EC_SOCKET_ERR + 4)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EBADF, TTV_EC_SOCKET_ERR + 9)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EACCES, TTV_EC_SOCKET_ERR + 13)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EFAULT, TTV_EC_SOCKET_ERR + 14)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EINVAL, TTV_EC_SOCKET_ERR + 22)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EMFILE, TTV_EC_SOCKET_ERR + 24)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EWOULDBLOCK, TTV_EC_SOCKET_ERR + 35)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EINPROGRESS, TTV_EC_SOCKET_ERR + 36)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EALREADY, TTV_EC_SOCKET_ERR + 37)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_ENOTSOCK, TTV_EC_SOCKET_ERR + 38)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EDESTADDRREQ, TTV_EC_SOCKET_ERR + 39)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EMSGSIZE, TTV_EC_SOCKET_ERR + 40)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EPROTOTYPE, TTV_EC_SOCKET_ERR + 41)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_ENOPROTOOPT, TTV_EC_SOCKET_ERR + 42)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EPROTONOSUPPORT, TTV_EC_SOCKET_ERR + 43)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_ESOCKTNOSUPPORT, TTV_EC_SOCKET_ERR + 44)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EOPNOTSUPP, TTV_EC_SOCKET_ERR + 45)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EPFNOSUPPORT, TTV_EC_SOCKET_ERR + 46)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EAFNOSUPPORT, TTV_EC_SOCKET_ERR + 47)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EADDRINUSE, TTV_EC_SOCKET_ERR + 48)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EADDRNOTAVAIL, TTV_EC_SOCKET_ERR + 49)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_ENETDOWN, TTV_EC_SOCKET_ERR + 50)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_ENETUNREACH, TTV_EC_SOCKET_ERR + 51)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_ENETRESET, TTV_EC_SOCKET_ERR + 52)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_ECONNABORTED, TTV_EC_SOCKET_ERR + 53)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_ECONNRESET, TTV_EC_SOCKET_ERR + 54)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_ENOBUFS, TTV_EC_SOCKET_ERR + 55)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EISCONN, TTV_EC_SOCKET_ERR + 56)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_ENOTCONN, TTV_EC_SOCKET_ERR + 57)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_ESHUTDOWN, TTV_EC_SOCKET_ERR + 58)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_ETOOMANYREFS, TTV_EC_SOCKET_ERR + 59)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_ETIMEDOUT, TTV_EC_SOCKET_ERR + 60)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_ECONNREFUSED, TTV_EC_SOCKET_ERR + 61)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_ELOOP, TTV_EC_SOCKET_ERR + 62)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_ENAMETOOLONG, TTV_EC_SOCKET_ERR + 63)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EHOSTDOWN, TTV_EC_SOCKET_ERR + 64)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EHOSTUNREACH, TTV_EC_SOCKET_ERR + 65)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_ENOTEMPTY, TTV_EC_SOCKET_ERR + 66)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EPROCLIM, TTV_EC_SOCKET_ERR + 67)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EUSERS, TTV_EC_SOCKET_ERR + 68)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EDQUOT, TTV_EC_SOCKET_ERR + 69)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_ESTALE, TTV_EC_SOCKET_ERR + 70)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EREMOTE, TTV_EC_SOCKET_ERR + 71)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_SYSNOTREADY, TTV_EC_SOCKET_ERR + 91)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_VERNOTSUPPORTED, TTV_EC_SOCKET_ERR + 92)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_NOTINITIALISED, TTV_EC_SOCKET_ERR + 93)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EDISCON, TTV_EC_SOCKET_ERR + 101)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_ENOMORE, TTV_EC_SOCKET_ERR + 102)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_ECANCELLED, TTV_EC_SOCKET_ERR + 103)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EINVALIDPROCTABLE, TTV_EC_SOCKET_ERR + 104)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EINVALIDPROVIDER, TTV_EC_SOCKET_ERR + 105)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EPROVIDERFAILEDINIT, TTV_EC_SOCKET_ERR + 106)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_SYSCALLFAILURE, TTV_EC_SOCKET_ERR + 107)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_SERVICE_NOT_FOUND, TTV_EC_SOCKET_ERR + 108)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_TYPE_NOT_FOUND, TTV_EC_SOCKET_ERR + 109)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_E_NO_MORE, TTV_EC_SOCKET_ERR + 110)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_E_CANCELLED, TTV_EC_SOCKET_ERR + 111)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_EREFUSED, TTV_EC_SOCKET_ERR + 112)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_HOST_NOT_FOUND, TTV_EC_SOCKET_ERR + 1001)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_TRY_AGAIN, TTV_EC_SOCKET_ERR + 1002)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_NO_RECOVERY, TTV_EC_SOCKET_ERR + 1003)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_NO_DATA, TTV_EC_SOCKET_ERR + 1004)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_RECEIVERS, TTV_EC_SOCKET_ERR + 1005)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_SENDERS, TTV_EC_SOCKET_ERR + 1006)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_NO_SENDERS, TTV_EC_SOCKET_ERR + 1007)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_NO_RECEIVERS, TTV_EC_SOCKET_ERR + 1008)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_REQUEST_CONFIRMED, TTV_EC_SOCKET_ERR + 1009)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_ADMISSION_FAILURE, TTV_EC_SOCKET_ERR + 1010)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_POLICY_FAILURE, TTV_EC_SOCKET_ERR + 1011)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_BAD_STYLE, TTV_EC_SOCKET_ERR + 1012)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_BAD_OBJECT, TTV_EC_SOCKET_ERR + 1013)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_TRAFFIC_CTRL_ERROR, TTV_EC_SOCKET_ERR + 1014)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_GENERIC_ERROR, TTV_EC_SOCKET_ERR + 1015)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_ESERVICETYPE, TTV_EC_SOCKET_ERR + 1016)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_EFLOWSPEC, TTV_EC_SOCKET_ERR + 1017)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_EPROVSPECBUF, TTV_EC_SOCKET_ERR + 1018)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_EFILTERSTYLE, TTV_EC_SOCKET_ERR + 1019)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_EFILTERTYPE, TTV_EC_SOCKET_ERR + 1020)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_EFILTERCOUNT, TTV_EC_SOCKET_ERR + 1021)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_EOBJLENGTH, TTV_EC_SOCKET_ERR + 1022)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_EFLOWCOUNT, TTV_EC_SOCKET_ERR + 1023)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_EUNKOWNPSOBJ, TTV_EC_SOCKET_ERR + 1024)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_EPOLICYOBJ, TTV_EC_SOCKET_ERR + 1025)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_EFLOWDESC, TTV_EC_SOCKET_ERR + 1026)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_EPSFLOWSPEC, TTV_EC_SOCKET_ERR + 1027)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_EPSFILTERSPEC, TTV_EC_SOCKET_ERR + 1028)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_ESDMODEOBJ, TTV_EC_SOCKET_ERR + 1029)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_ESHAPERATEOBJ, TTV_EC_SOCKET_ERR + 1030)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_QOS_RESERVED_PETYPE, TTV_EC_SOCKET_ERR + 1031)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_SECURE_HOST_NOT_FOUND, TTV_EC_SOCKET_ERR + 1032)\
	DEFINE_TTV_ERROR_CODE_VALUE(TTV_EC_SOCKET_IPSEC_NAME_POLICY_ERROR, TTV_EC_SOCKET_ERR + 1033)\
	/**/\
	DEFINE_TTV_ERROR_CODE(TTV_EC_SOCKET_END)\
	/*****************************/\
	/* chat */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CHAT_NOT_INITIALIZED)					/*!< The chat subsystem has not been initialized properly. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CHAT_ALREADY_INITIALIZED)				/*!< The chat subsystem has already been initialized. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CHAT_ALREADY_IN_CHANNEL)				/*!< Already in the channel. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CHAT_INVALID_LOGIN)					/*!< Invalid login credentials. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CHAT_INVALID_CHANNEL)					/*!< The named channel doesn't exist. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CHAT_LOST_CONNECTION)					/*!< Lost connection to the chat server. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CHAT_COULD_NOT_CONNECT)				/*!< Could not connect to the chat server. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CHAT_NOT_IN_CHANNEL)					/*!< Not in the named channel. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CHAT_INVALID_MESSAGE)					/*!< Not a valid message. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CHAT_TOO_MANY_REQUESTS)				/*!< The request queue is growing too large and the request has been ignored. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CHAT_LEAVING_CHANNEL)					/*!< In the middle of leaving the channel. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CHAT_SHUTTING_DOWN)					/*!< The chat system is in the middle of shutting down and cannot be used currently. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CHAT_ANON_DENIED)						/*!< Attempted to perform an action that anonymous connections are not allowed to do. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CHAT_EMOTICON_DATA_NOT_READY)			/*!< The emoticon data is not ready to use. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CHAT_EMOTICON_DATA_DOWNLOADING)		/*!< The emoticon data is already downloading. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CHAT_EMOTICON_DATA_LOCKED)				/*!< The emoticon data has been locked by the client by a call to TTV_Chat_GetEmoticonData which has not been freed by TTV_Chat_FreeEmoticonData. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_CHAT_EMOTICON_DOWNLOAD_FAILED)			/*!< There were too many download errors while trying to fetch the emoticon data. */\
	/*****************************/\
	/* webcam */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBCAM_NO_PLATFORM_SUPPORT)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBCAM_COULD_NOT_COMPLETE)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBCAM_OUT_OF_MEMORY)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBCAM_UNKNOWN_ERROR)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBCAM_INVALID_PARAMETER)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBCAM_INVALID_CAPABILITY)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBCAM_BUFFER_NOT_BIG_ENOUGH)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBCAM_DEVICE_NOT_STARTED)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBCAM_DEVICE_ALREADY_STARTED)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBCAM_DEVICE_NOT_FOUND)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBCAM_FRAME_NOT_AVAILABLE)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBCAM_NOT_INITIALIZED)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBCAM_FAILED_TO_START)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBCAM_LEFT_IN_UNSAFE_STATE)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBCAM_UNSUPPORTED_SOURCE_FORMAT)\
	DEFINE_TTV_ERROR_CODE(TTV_EC_WEBCAM_UNSUPPORTED_TARGET_FORMAT)\
	/**/\
	DEFINE_TTV_ERROR_CODE(TTV_EC_INVALID_STRUCT_SIZE)		/*!< The size field of the struct does not have the expected value.  Some fields may have been added to the struct and you may have set them and recompile your code. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_STREAM_ALREADY_STARTED)	/*!< The requested operation can't be serviced because the broadcast has already been started. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_STREAM_NOT_STARTED)		/*!< The requested operation can't be serviced because the broadcast not been started.	*/\
	DEFINE_TTV_ERROR_CODE(TTV_EC_REQUEST_ABORTED)			/*!< The request was aborted and did not finish. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_FRAME_QUEUE_TOO_LONG)		/*!< The network is backing up because video settings are too high for the internet connection.  Stop the stream and restart with lower settings. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_GRAPHICS_API_ERROR)		/*!< Error in a native graphics API call. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_METADATA_CACHE_FULL)		/*!< The local cache of meta data is full and the latest request was not competed. Wait some time until it flushes. */\
	DEFINE_TTV_ERROR_CODE(TTV_EC_SOUNDFLOWER_NOT_INSTALLED)	/*!< Mac requires SoundFlower to be installed to capture system audio. */

/**
 * TTV_ErrorCode
 */
#define DEFINE_TTV_ERROR_CODE(err) err,
#define DEFINE_TTV_ERROR_CODE_VALUE(err, val) err = val,
typedef enum
{
	TTV_ERROR_CODES

} TTV_ErrorCode;


#define TTV_FAILED(err) ( (err) > TTV_EC_SUCCESS )
#define TTV_SUCCEEDED(err) ( (err) <= TTV_EC_SUCCESS)
#define TTV_RETURN_ON_NULL(ptr,err) { if ( (ptr) == nullptr) return err; }
#define ASSERT_ON_ERROR(err) {assert ( (err) <= TTV_EC_SUCCESS ); }

#define TTV_TO_WSA_ERROR(ttv_ec) (int)(ttv_ec-TTV_EC_SOCKET_ERR+WSABASEERR)
#define WSA_TO_TTV_ERROR(wsa_ec) (TTV_ErrorCode) (wsa_ec-WSABASEERR+TTV_EC_SOCKET_ERR)

#define RETURN_CLIENT_ERROR(errorCode)	assert( !errorCode );  return errorCode;
