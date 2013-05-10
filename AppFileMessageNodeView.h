/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:39:01 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AppFileMessageNodeView : BaseMessageNodeView {
	UIImageView* m_oBkgImageView; 
	UILabel* m_detailLabel; 
	MMProgressView* m_progressView; 
	UIView* m_progressBkgView; 
}
+(BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
-(void)initDetailLabel;
-(void)onClick;
-(void)genProgressViewWithFrame:(CGRect)arg1 andBackgroundFrame:(CGRect)arg2;
-(id)getFileDetailText;
-(id)getTitleLabel;
-(id)getDefaultThumbImage;
-(id)genCenterImage:(id)arg1;
-(id)getBackgroundImage;
-(void)onTouchCancel;
-(void)onTouchDownRepeat;
-(void)onTouchDown;
-(void)onTouchUpInside;
-(void)onLongTouch;
-(void)layoutSubviewsInternal;
-(CGSize)sizeForFrame:(CGRect)arg1;
-(void)onMenuItemWillHide;
-(void)onForward:(id)arg1;
-(void)onClearResource;
-(void)onDisappear;
-(void)updateBkgImage:(BOOL)arg1;
-(void)showOpearation;
-(id)getBackgroundImageHL;
-(id)getTitleText;
-(void)resend;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(void)updateStatus:(id)arg1;
-(void)dealloc;
@end