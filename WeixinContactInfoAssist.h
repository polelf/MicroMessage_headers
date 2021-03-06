/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:40:22 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface WeixinContactInfoAssist : CBaseContactInfoAssist {
	BOOL m_bFirstBecomeFriend; 
}
-(id)getInfoDisplayName;
-(void)contactVerifyOk:(id)arg1 opCode:(unsigned long)arg2;
-(void)initHeaderView;
-(void)initFooterView;
-(void)onNewMessage:(id)arg1;
-(void)updateRemarkLabel;
-(void)reloadTableView;
-(void)opBlackList;
-(void)initSendMsgBtn;
-(void)handleAddedContact;
-(void)updateSaveRemarkNameBtn;
-(void)onVerifyContactOk;
-(void)onAction;
-(void)onVerifyContact:(id)arg1 opcode:(unsigned long)arg2;
-(void)doAddToBlackList;
-(void)opDelete;
-(BOOL)isShowBlackAction;
-(void)addToBlackList;
-(void)removeFromBlackList;
-(void)initBlackListTipsLabel;
-(void)initFooterBtnArea;
-(void)initSayHelloBtn;
-(void)initAddContactBtn;
-(void)initBlackAndExposeContactBtn;
-(void)initVerifyBtn;
-(void)initExposeBtn;
-(BOOL)isShowExposeButton;
-(void)onStartChat:(id)arg1;
-(void)initHelloWord;
-(void)showRightButton;
-(BOOL)isNeedShowRightBtn;
-(BOOL)isFromStrangeScene;
-(void)onRelpyContact:(id)arg1;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(id)init;
-(void)dealloc;
-(void)updateFooterView;
@end