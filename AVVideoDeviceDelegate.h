/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:40:41 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol IVOIPModeSwitchExt
@optional
-(void)OnBothEarMode;
-(void)OnRemoteVideoMode;
-(void)OnRemoteEarMode;
-(void)OnLocalVideoMode;
-(void)OnLocalEarMode;
-(void)OnBothVideoMode;
-(void)OnRemoteEarModeFor2G;
-(void)OnLocalEarModeFor2G;
@end

@protocol IVOIPExt
@optional
-(void)OnTellMeViewIsExist(*):arg1 ;
-(void)OnMonitorWithSendFPS(int):arg1 andRecvFPS(int):arg2 ;
-(void)OnSyncError(id):arg1 ErrNo(int):arg2 ;
-(void)OnError(id):arg1 ErrNo(int):arg2 ;
-(void)OnTimeOut(id):arg1 ;
-(void)OnInterrupt(id):arg1 ;
-(void)OnBeginTalk(id):arg1 ;
-(void)OnBeginConnect(id):arg1 ;
-(void)OnBeHanguped(id):arg1 ;
-(void)OnBeRejected(id):arg1 ;
-(void)OnBeAccepted(id):arg1 ;
-(void)OnNoAnswer(id):arg1 ;
-(void)OnAccept(id):arg1 ErrNo(int):arg2 ;
-(void)OnCall(id):arg1 ErrNo(int):arg2 ;
@end

@protocol AVVideoDeviceDelegate
@optional
-(void)videoDevice(id):arg1 didFailWithError(id):arg2 ;
-(void)videoDeviceSessionFinished(id):arg1 ;
-(void)videoDeviceSessionBegan(id):arg1 ;
-(void)videoDeviceCameraBack(id):arg1 ;
-(void)videoDeviceCameraFront(id):arg1 ;
@end
