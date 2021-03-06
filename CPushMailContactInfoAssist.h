/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:42:02 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <MessageObserverDelegate.h>
#import <UIAlertViewDelegate.h>

@interface CPushMailContactInfoAssist : CBaseContactInfoAssist <MessageObserverDelegate, UIAlertViewDelegate> {
	struct map<unsigned int,unsigned int,stdless<unsigned int>,stdallocator<stdpair<const unsigned int, unsigned int> > > m_mapPushMailCellToCellType; 
}
-(void)MessageReturn:(unsigned long)arg1 MessageInfo:(id)arg2 Event:(unsigned long)arg3;
-(void)initHeaderView;
-(void)resetPushmailCellType;
-(void)makeCell:(id)arg1 row:(unsigned)arg2 section:(unsigned long)arg3;
-(id)getLoadingText;
-(void)installPlugin;
-(void)onSwitchViewOff;
-(void)onSwitchViewOn;
-(void)showInputPwdAlert:(BOOL)arg1;
-(void)handleSwitchPushMailOk;
-(id)getPushMailErrorTitle;
-(void)onSendPushMailPwd:(id)arg1;
-(void)doSwitchPushMailByAlertView:(id)arg1;
-(BOOL)isShowOpenPushMailBtn;
-(void)makePushMailFolderConfigCell:(id)arg1;
-(void)makePushMailWriteMailCell:(id)arg1;
-(void)makePushMailViewMailCell:(id)arg1;
-(void)doSwitchPushMail:(id)arg1;
-(void)reloadPushMailTableView;
-(void)showClosePushMailAlert;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(void)willPresentAlertView:(id)arg1;
-(void)dealloc;
-(void).cxx_destruct;
-(id).cxx_construct;
@end