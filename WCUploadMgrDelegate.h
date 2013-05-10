/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:39:27 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol MMService
@optional
-(void)onServiceClearData;
-(BOOL)onServiceMemoryWarning;
-(void)onServiceTerminate;
-(void)onServiceEnterBackground;
-(void)onServiceReloadData;
-(void)onServiceInit;
@end

@protocol WCBGImgLogicNotity
@optional
-(id)database;
-(id)getUploadingDataItems;
-(void)NotifyBackgroundChanged;
-(void)NotifyToDownloadMedia(id):arg1 downloadType(int):arg2 ;
-(void)NotifyToUploadWithTask(id):arg1 ;
@end

@protocol WCDownloadMgrDelegate
@required
-(void)onCancelDownloadSuccess(id):arg1 downloadType(int):arg2 ;
-(void)onDownloadFinish(id):arg1 downloadType(int):arg2 ;
-(void)onDownloadMediaProcessChange(id):arg1 downloadType(int):arg2 current(int):arg3 total(int):arg4 ;
-(void)onCancelDownloadSuccess(id):arg1 downloadType(int):arg2 ;
-(void)onDownloadFinish(id):arg1 downloadType(int):arg2 ;
-(void)onDownloadMediaProcessChange(id):arg1 downloadType(int):arg2 current(int):arg3 total(int):arg4 ;
@end

@protocol WCTimelineDelegate
@required
-(void)onNoMoreTimelineData;
-(void)onTimelineDataChangedWithAdded(id):arg1 andChanged(id):arg2 andDeleted(id):arg3 ;
-(void)onNoMoreTimelineData;
-(void)onTimelineDataChangedWithAdded(id):arg1 andChanged(id):arg2 andDeleted(id):arg3 ;
@end

@protocol WCLbsDelegate
@optional
-(void)onWCLBSContactsUpdated(id):arg1 ;
@end

@protocol WCCommentUploadMgrDelegate
@required
-(void)onCommentReturn(id):arg1 ;
-(void)onCommentReturn(id):arg1 ;
@end

@protocol WCUploadMgrDelegate
@optional
-(void)onUploadRestarted(id):arg1 ;
-(void)onUploadFailed(id):arg1 ;
-(void)onUploadFinished(id):arg1 ;
-(void)onMediaUploadFinished(id):arg1 ;
@end
