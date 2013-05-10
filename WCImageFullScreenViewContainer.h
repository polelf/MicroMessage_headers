/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:41:16 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIScrollViewDelegate.h>
#import <MMImageScrollViewHelperDelegate.h>
#import <WCFacadeExt.h>
#import <UIActionSheetDelegate.h>

@interface WCImageFullScreenViewContainer : UIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate, WCFacadeExt, UIActionSheetDelegate> {
	WCMediaItem* m_mediaData; 
	CGRect m_originImageRectInScreen; 
	CGSize m_initalContentSize; 
	UIImage* m_image; 
	BOOL m_isAnimating; 
	BOOL m_isShowing; 
	BOOL m_bIsLongPressHandled; 
	BOOL m_isImageReady; 
	int m_lastDeviceOrientation; 
	UIImageView* m_container; 
	MMLoadingView* m_loadingView; 
	MMProgressViewEx* m_processView; 
	MMImageScrollViewHelper* m_scrollViewHelper; 
	UIActionSheet* m_actionSheet; 
	id<WCImageFullScreenViewContainerDelegate> m_delegate; 
}
@property (nonatomic,copy) NSArray* gestureRecognizers; 
@property (assign,nonatomic) float maximumZoomScale; 
@property (assign,nonatomic) float minimumZoomScale; 
@property (assign,nonatomic) float zoomScale; 
@property (assign,nonatomic) CGRect frame; 
@property (nonatomic,copy) MMLoadingView* m_loadingView; 
@property (assign,nonatomic) id<WCImageFullScreenViewContainerDelegate> m_delegate; 
@property (assign,nonatomic) CGSize m_initalContentSize; 
@property (assign,nonatomic) CGRect m_originImageRectInScreen; 
@property (nonatomic,retain) WCMediaItem* m_mediaData; 
@property (nonatomic,retain) UIImage* m_image; 
-(void)setM_delegate:(id)arg1;
-(void)onDownloadMediaProcessChange:(id)arg1 downloadType:(int)arg2 current:(int)arg3 total:(int)arg4;
-(void)onSingleTap:(id)arg1;
-(void)onDoubleTap:(id)arg1;
-(void)setM_image:(id)arg1;
-(void)startLoadingBlocked;
-(void)stopAllAnimation;
-(void)LongPressEvents;
-(void)animationHideWithRotate;
-(void)tryDownloadImage;
-(void)animationShowWithMediaItem:(id)arg1;
-(void)setM_mediaData:(id)arg1;
-(void)animationShowWithImageView:(id)arg1;
-(void)setImageWithoutAnimation:(id)arg1;
-(void)setM_originImageRectInScreen:(CGRect)arg1;
-(void)onDeviceRotate;
-(id)viewForZooming;
-(void)animationHideDidStop;
-(void)animationShowView;
-(void)animationShowStep2_Animate;
-(void)animationShowStep2_ImageNotReady;
-(void)animationShowDidStop;
-(void)showProcessView;
-(void)initScrollViewHelper;
-(void)animationShowStep2;
-(void)setContentOffsetAndSize;
-(void)setM_initalContentSize:(CGSize)arg1;
-(CGRect)getCenterRect:(CGSize)arg1 maxSize:(CGSize)arg2;
-(void)animationRotateDidStop;
-(struct CGAffineTransform)getAnimationRotateTransform;
-(void)clearStatus;
-(void)setFrame:(CGRect)arg1;
-(void)scrollViewDidZoom:(id)arg1;
-(id)viewForZoomingInScrollView:(id)arg1;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2;
-(void)setContentOffset:(CGPoint)arg1;
-(void)setContentSize:(CGSize)arg1;
-(void)setZoomScale:(float)arg1 animated:(BOOL)arg2;
-(void)dealloc;
@end