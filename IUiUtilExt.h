/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:43:00 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol CustomMenuToolViewDelegate
@required
-(void)onChangeToExchang(id):arg1 ;
-(void)onJumpToWebView(id):arg1 ;
-(void)onClickCommandBtn(id):arg1 ;
-(void)onSubMenuPresentWithIndex(int):arg1 ArrowX(float):arg2 ;
-(void)changeToInputMode;
-(void)onSubMenuDismiss;
-(void)onChangeToExchang(id):arg1 ;
-(void)onJumpToWebView(id):arg1 ;
-(void)onClickCommandBtn(id):arg1 ;
-(void)onSubMenuPresentWithIndex(int):arg1 ArrowX(float):arg2 ;
-(void)changeToInputMode;
-(void)onSubMenuDismiss;
@end

@protocol CustomSubMenuFloatViewDelegate
@required
-(void)onChangeToExchang(id):arg1 ;
-(void)onJumpToWebView(id):arg1 ;
-(void)onClickCommandBtn(id):arg1 ;
-(void)onSubMenuDismiss;
-(void)onChangeToExchang(id):arg1 ;
-(void)onJumpToWebView(id):arg1 ;
-(void)onClickCommandBtn(id):arg1 ;
-(void)onSubMenuDismiss;
@end

@protocol IBrandUserUIExt
@required
-(void)OnClickCommand(id):arg1 CustomMenuButton(id):arg2 ;
-(void)OnClickCommand(id):arg1 CustomMenuButton(id):arg2 ;
@end

@protocol IUiUtilExt
@optional
-(void)onTaskBarHiddenChanged(BOOL):arg1 withAnimation(int):arg2 ;
-(void)onTopBarHiddenChanged(BOOL):arg1 withAnimation(int):arg2 ;
-(void)onStatusBarHiddenChanged(int):arg1 ;
-(void)onTopBarFrameChanged;
-(void)onStatusBarFrameChanged;
-(void)onMainWindowFrameChanged;
@end
