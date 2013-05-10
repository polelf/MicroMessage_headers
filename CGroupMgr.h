/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:40:04 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <MMService.h>
#import <NotifyFromEventDelegate.h>
#import <PBMessageObserverDelegate.h>

@interface CGroupMgr : MMService <MMService, NotifyFromEventDelegate, PBMessageObserverDelegate> {
	CGroupDB* m_oGroupDB; 
	CGroupOpLog* m_oGroupOpLog; 
	NSMutableArray* m_arrNeedVerifyUsrName; 
}
+(BOOL)IsReservedGroupTopic:(id)arg1;
-(BOOL)CreateGroup:(id)arg1 withMemberList:(id)arg2;
-(void)onServiceInit;
-(void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
-(BOOL)QuitGroup:(id)arg1 withUsrName:(id)arg2;
-(BOOL)AddGroupMember:(id)arg1 withMemberList:(id)arg2;
-(BOOL)SetGroupTopic:(id)arg1 withTopic:(id)arg2;
-(BOOL)DeleteGroupMember:(id)arg1 withMemberList:(id)arg2;
-(BOOL)ShowInContactBook:(id)arg1;
-(void)initDB:(id)arg1 withLock:(id)arg2;
-(BOOL)SetShowDislayName:(BOOL)arg1 forGroup:(id)arg2;
-(BOOL)SetDislayName:(id)arg1 forGroup:(id)arg2;
-(void)NotifyFromEvent:(id)arg1 Message:(unsigned long)arg2 MessageInfo:(id)arg3;
-(id)GetGroupMemberWithOutMyself:(id)arg1;
-(id)GetGroupMember:(id)arg1;
-(void)OnCreateChatRoom:(id)arg1;
-(void)OnAddChatRoomMember:(id)arg1;
-(void)OnDeleteChatRoomMemberResponse:(id)arg1;
-(void)addCreateMsg:(id)arg1 ContactList:(id)arg2;
-(void)addChatMemberNeedVerifyMsg:(id)arg1 ContactList:(id)arg2;
-(id)init;
-(void)dealloc;
@end