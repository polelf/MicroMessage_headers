/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:40:19 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol MessageObserverDelegate
@required
-(void)MessageReturn(unsigned long):arg1 MessageInfo(id):arg2 Event(unsigned long):arg3 ;
-(void)MessageReturn(unsigned long):arg1 MessageInfo(id):arg2 Event(unsigned long):arg3 ;
@end

@protocol UITextFieldDelegate
@optional
-(BOOL)textFieldShouldBeginEditing(id):arg1 ;
-(void)textFieldDidBeginEditing(id):arg1 ;
-(BOOL)textFieldShouldEndEditing(id):arg1 ;
-(void)textFieldDidEndEditing(id):arg1 ;
-(BOOL)textField(id):arg1 shouldChangeCharactersInRange({):arg2 replacementString(_):arg3 ;
-(BOOL)textFieldShouldClear(id):arg1 ;
-(BOOL)textFieldShouldReturn(id):arg1 ;
@end
