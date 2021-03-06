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

@protocol MMGrowTextViewDelegate
@optional
-(void)MMGrowTextView(id):arg1 pasteImage(id):arg2 ;
-(BOOL)MMGrowTextView(id):arg1 shouldPasteImage(id):arg2 ;
-(void)UITextViewTextDidChangeNotification(id):arg1 ;
-(void)keyboardWillHide(float):arg1 ;
-(void)keyboardDidShow(float):arg1 ;
-(void)keyboardWillShow(float):arg1 ;
-(BOOL)TextViewDidDelete;
-(void)setKeyboardAnimationDuration(float):arg1 ;
-(void)TextDidChanged(id):arg1 selectedRange({):arg2 ;
-(void)TextViewDidEnter(id):arg1 ;
-(void)TextViewHeightDidChanged(id):arg1 ;
@end

@protocol BaseEmoticonViewDelegate
@optional
-(void)didSelectorSelfDefinedEmoticon(id):arg1 ;
-(void)didSelectorEmojiArt(id):arg1 ;
-(void)didSelectorEmoji(id):arg1 ;
-(void)didSelectorQQEmotcion(id):arg1 ;
-(void)deleteEmoticon;
-(void)addSelfDefinedEmoticon;
-(void)didSelectorSelfDefinedEmotcion(id):arg1 ;
-(void)didSelectorEmoticon(id):arg1 ;
@end

@protocol MMTransparentButtonDelegate
@optional
-(void)MMTransparentButton_touchesCancelled(id):arg1 withEvent(id):arg2 ;
-(void)MMTransparentButton_touchesEnded(id):arg1 withEvent(id):arg2 ;
-(void)MMTransparentButton_touchesMoved(id):arg1 withEvent(id):arg2 ;
-(void)MMTransparentButton_touchesBegan(id):arg1 withEvent(id):arg2 ;
@end

@protocol SelectAttachmentViewControllerDelegate
@optional
-(void)onAdd3rdApp(id):arg1 ;
-(void)onShare3rdAppButtonClicked(id):arg1 ;
-(void)onVoiceInputClicked(id):arg1 ;
-(void)onVoiceVoipButtonClicked(id):arg1 ;
-(void)onVideoVoipButtonClicked(id):arg1 ;
-(void)onShareCardButtonClicked(id):arg1 ;
-(void)onLocationButtonClicked(id):arg1 ;
-(void)onCameraControllerClicked(id):arg1 ;
-(void)onMediaBrowserClicked(id):arg1 ;
@required
-(void)didSelectAttachmentAtIndex(unsigned long):arg1 ;
-(void)didSelectAttachmentAtIndex(unsigned long):arg1 ;
@end
