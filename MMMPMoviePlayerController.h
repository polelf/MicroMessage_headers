/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:40:16 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MMMPMoviePlayerController : NSObject {
	CGRect _frame; 
	UIView* _superView; 
	MPMoviePlayerController* _moviePlayerController; 
}
@property (nonatomic,retain) MPMoviePlayerController* moviePlayerController; 				//@synthesize moviePlayerController=_moviePlayerController - In the implementation block
@property (assign,nonatomic) UIView* superView; 				//@synthesize superView=_superView - In the implementation block
@property (assign,nonatomic) CGRect frame; 				//@synthesize frame=_frame - In the implementation block
-(void)playMovieFile:(id)arg1;
-(void)setSuperView:(id)arg1;
-(void)deletePlayerAndNotificationObservers;
-(void)createAndPlayMovieForURL:(id)arg1 sourceType:(int)arg2;
-(void)createAndConfigurePlayerWithURL:(id)arg1 sourceType:(int)arg2;
-(void)applyUserSettingsToMoviePlayer;
-(void)installMovieNotificationObservers;
-(void)removeMovieViewFromViewHierarchy;
-(void)setMoviePlayerController:(id)arg1;
-(void)removeMovieNotificationHandlers;
-(void)moviePlayBackStateDidChange:(id)arg1;
-(void)mediaIsPreparedToPlayDidChange:(id)arg1;
-(void)moviePlayBackDidFinish:(id)arg1;
-(void)loadStateDidChange:(id)arg1;
-(void)playMovieStream:(id)arg1;
-(void)setFrame:(CGRect)arg1;
-(void)dealloc;
@end