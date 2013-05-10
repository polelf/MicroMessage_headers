/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:43:26 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol UITextViewDelegate
@optional
-(BOOL)textViewShouldBeginEditing(id):arg1 ;
-(BOOL)textViewShouldEndEditing(id):arg1 ;
-(void)textViewDidBeginEditing(id):arg1 ;
-(void)textViewDidEndEditing(id):arg1 ;
-(BOOL)textView(id):arg1 shouldChangeTextInRange({):arg2 replacementText(_):arg3 ;
-(void)textViewDidChange(id):arg1 ;
-(void)textViewDidChangeSelection(id):arg1 ;
@end

@protocol ISysCallCheckExt
@optional
-(void)InputIsAvailableChanged(BOOL):arg1 ;
-(void)EndInterruption;
-(void)BeginInterruption;
@end

@protocol UIActionSheetDelegate
@optional
-(void)actionSheet(id):arg1 clickedButtonAtIndex(int):arg2 ;
-(void)actionSheetCancel(id):arg1 ;
-(void)willPresentActionSheet(id):arg1 ;
-(void)didPresentActionSheet(id):arg1 ;
-(void)actionSheet(id):arg1 willDismissWithButtonIndex(int):arg2 ;
-(void)actionSheet(id):arg1 didDismissWithButtonIndex(int):arg2 ;
@end
