/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:41:40 PM China Standard Time
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

@protocol IMMLanguageMgrExt
@optional
-(void)onLanguageChange;
@end

@protocol IMMFontMgrExt
@optional
-(void)onFontSizeChange;
@end

@protocol IContactMgrExt
@optional
-(void)OnChangeNotifyStatus(id):arg1 withStatus(BOOL):arg2 ;
-(void)onContactListUpdate(unsigned long):arg1 ;
-(void)onSyncSXContactEnd;
-(void)onDeleteContact(id):arg1 ;
-(void)onModifyContact(id):arg1 ;
-(void)onModifyContactHeadImage(id):arg1 ;
@end

@protocol IMMNewSessionMgrExt
@optional
-(void)onSessionUpgrade;
-(void)getComparer(*):arg1 ForSelector(id):arg2 ;
-(void)onDeleteSessionOfUser(id):arg1 ;
-(void)isUser(id):arg1 hasSpecalSessionInfo(*):arg2 ;
-(void)isMessage(id):arg1 Handled(*):arg2 ;
-(void)isUser(id):arg1 Handled(*):arg2 ;
-(void)onSessionTotalUnreadCountChange(unsigned long):arg1 ;
-(void)onDeleteSession(unsigned long):arg1 withUser(id):arg2 ;
-(void)onActiveUsrNameChange(id):arg1 curUsrName(id):arg2 ;
-(void)onNewMsgArriving(id):arg1 NotifyFlag(int):arg2 ;
-(void)onSessionChanged(id):arg1 ;
-(void)onNeedReload;
@end
