/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:43:15 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol WCSelectorViewDelegate
@optional
-(void)onClickWholeView;
-(void)onDeleteViewAtIndex(unsigned):arg1 ;
-(void)onAddViews;
@end

@protocol WCSelectorViewDataSource
@optional
-(void)didSelectViewAtIndex(unsigned):arg1 ;
@required
-(BOOL)shouldShowDeleteView;
-({);
-(id)viewAtIndex(unsigned):arg1 ;
-(unsigned)numbersOfViews;
-(BOOL)shouldShowDeleteView;
-({);
-(id)viewAtIndex(unsigned):arg1 ;
-(unsigned)numbersOfViews;
@end

@protocol WCSelectContactDelegate
@optional
-(void)OnWCSelectUsrNameList(id):arg1 ;
@end
