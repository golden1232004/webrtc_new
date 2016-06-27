#include "webrtc_streamer.h"
#include "peer_connection_client.h"
#include "conductor.h"
#include "flagdefs.h"

#include "webrtc/base/ssladapter.h"
#include "webrtc/base/thread.h"



//连接TURN服务器，获取SDP信息
int main(int argc, char *argv[])
{
	rtc::Thread* thread = rtc::Thread::Current();
	rtc::InitializeSSL();

	PeerConnectionClient client;
	rtc::scoped_refptr<Conductor> conductor(new rtc::RefCountedObject<Conductor>(&client));
	conductor->ConnectToPeer(1);

    thread->Run();

	return 0;
}























