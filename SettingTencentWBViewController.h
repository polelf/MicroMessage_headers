/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:38:53 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIAlertViewDelegate.h>

@interface SettingTencentWBViewController : SettingBaseViewController <UIAlertViewDelegate> {
	CUsrInfo* m_usrInfo; 
	id<SettingTencentWBDelegate> m_delegate; 
}
@property (assign,nonatomic) id<SettingTencentWBDelegate> m_delegate; 
-(void)setM_delegate:(id)arg1;
-(void)Save;
-(void)makeWeiboCell:(id)arg1;
-(void)makeWeiboPrivateCell:(id)arg1;
-(void)makeCell:(id)arg1 col:(id)arg2 value:(id)arg3 andTag:(unsigned long)arg4;
-(void)onSwitchValueChange:(id)arg1;
-(id)getWeiboUsrName;
-(void)beginEdit:(id)arg1;
-(void)onTextFieldChanged:(id)arg1;
-(void)finishEditing:(id)arg1;
-(BOOL)checkWeiboUsrName:(id)arg1;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(void)viewDidLoad;
-(void)dealloc;
@end