/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:41:41 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <MessageObserverDelegate.h>

@interface LBSContactInfoAssist : CBaseContactInfoAssist <MessageObserverDelegate> {
}
-(void)MessageReturn:(unsigned long)arg1 MessageInfo:(id)arg2 Event:(unsigned long)arg3;
-(void)initHeaderView;
-(void)makeCell:(id)arg1 row:(unsigned)arg2 section:(unsigned long)arg3;
-(void)uninstallPlugin;
-(void)clearLBSData;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(void)dealloc;
@end