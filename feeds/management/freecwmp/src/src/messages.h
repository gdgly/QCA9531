/*
 *	This program is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 2 of the License, or
 *	(at your option) any later version.
 *
 *	Copyright (C) 2011 Luka Perkov <freecwmp@lukaperkov.net>
 */

#ifndef _FREECWMP_MESSAGES_H__
#define _FREECWMP_MESSAGES_H__

#define CWMP_INFORM_MESSAGE \
"<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>"							\
"<soap_env:Envelope "												\
	"xmlns:soap_env=\"http://schemas.xmlsoap.org/soap/envelope/\" "						\
	"xmlns:soap_enc=\"http://schemas.xmlsoap.org/soap/encoding/\" "						\
	"xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" "							\
	"xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" "						\
	"xmlns:cwmp=\"urn:dslforum-org:cwmp-1-2\">"								\
        "<soap_env:Header>"											\
		"<cwmp:ID soap_env:mustUnderstand=\"1\"/>"							\
	"</soap_env:Header>"											\
	"<soap_env:Body>"											\
	"<cwmp:Inform>"												\
		"<DeviceId>"											\
			"<Manufacturer/>"									\
			"<OUI/>"										\
			"<ProductClass/>"									\
			"<SerialNumber/>"									\
		"</DeviceId>"											\
		"<Event soap_enc:arrayType=\"cwmp:EventStruct[0]\" />"						\
		"<MaxEnvelopes>1</MaxEnvelopes>"								\
		"<CurrentTime/>"										\
		"<RetryCount/>"											\
		"<ParameterList soap_enc:arrayType=\"cwmp:ParameterValueStruct[11]\">"				\
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.DeviceInfo.SpecVersion</Name>\n"			\
				"<Value xsi:type=\"xsd:string\">1.0</Value>"					\
			"</ParameterValueStruct>"								\
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.DeviceInfo.Manufacturer</Name>\n"			\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.DeviceInfo.ManufacturerOUI</Name>\n"		\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.DeviceInfo.ProductClass</Name>\n"			\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.DeviceInfo.SerialNumber</Name>\n"			\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.DeviceInfo.HardwareVersion</Name>\n"		\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.DeviceInfo.SoftwareVersion</Name>\n"		\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.DeviceInfo.memory_utilization</Name>\n"	\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.DeviceInfo.flash_utilization</Name>\n"	\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.DeviceInfo.cpu_utilization</Name>\n"	\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.DeviceInfo.UpTime</Name>\n"	\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.LANDevice.1.Wireless.WiFiClient</Name>\n"	\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.DeviceInfo.wireless_ssid</Name>\n"	\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.DeviceInfo.wireless_enable</Name>\n"	\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.DeviceInfo.wireless_key</Name>\n"	\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.DeviceInfo.wireless_channel_status</Name>\n"	\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.DeviceInfo.portstate</Name>\n"	\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
                        "<ParameterValueStruct>"                                                                \
                                "<Name>InternetGatewayDevice.DeviceInfo.wan_current_ip_addr</Name>\n" \
                                "<Value xsi:type=\"xsd:string\"/>"                                              \
                        "</ParameterValueStruct>"                                                               \
                        "<ParameterValueStruct>"                                                                \
                                "<Name>InternetGatewayDevice.DeviceInfo.work_mode</Name>\n" \
                                "<Value xsi:type=\"xsd:string\"/>"                                              \
                        "</ParameterValueStruct>"                                                               \
                        "<ParameterValueStruct>"                                                                \
                                "<Name>InternetGatewayDevice.DeviceInfo.wifidog_enable</Name>\n" \
                                "<Value xsi:type=\"xsd:string\"/>"                                              \
                        "</ParameterValueStruct>"                                                               \
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.DeviceInfo.client_speed</Name>\n"	\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
		"</ParameterList>"										\
	"</cwmp:Inform>"											\
"</soap_env:Body>"												\
"</soap_env:Envelope>"

			/*
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.DeviceInfo.ProvisioningCode</Name>\n"		\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.ManagementServer.ParameterKey</Name>\n"		\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.ManagementServer.ConnectionRequestURL</Name>\n"	\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.WANDevice.1.WANConnectionDevice.1.WANIPConnection.1.ExternalIPAddress</Name>\n"	\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
			*/
			/*
			"<ParameterValueStruct>"								\
				"<Name>InternetGatewayDevice.DeviceInfo.root_password</Name>\n"	\
				"<Value xsi:type=\"xsd:string\"/>"						\
			"</ParameterValueStruct>"								\
			*/

#define CWMP_RESPONSE_MESSAGE \
"<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>"		\
"<soap_env:Envelope "							\
	"xmlns:soap_env=\"http://schemas.xmlsoap.org/soap/envelope/\" "	\
	"xmlns:soap_enc=\"http://schemas.xmlsoap.org/soap/encoding/\" "	\
	"xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" "		\
	"xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" "	\
	"xmlns:cwmp=\"urn:dslforum-org:cwmp-1-2\">"			\
	"<soap_env:Header>"						\
		"<cwmp:ID soap_env:mustUnderstand=\"1\"/>"		\
	"</soap_env:Header>"						\
	"<soap_env:Body/>"						\
"</soap_env:Envelope>"

#endif

