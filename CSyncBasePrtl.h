/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:40:23 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CSyncBasePrtl : CPrtlChannelProxy {
	NSString* m_nsDocPath; 
}
@property (nonatomic,retain) NSString* m_nsDocPath; 
-(void)setM_nsDocPath:(id)arg1;
-(void)ParseCmd:(unsigned long)arg1 Buff:(char*)arg2 Len:(unsigned long)arg3;
-(id)HandleMemContact:(struct tagMMRoomInfo*)arg1;
-(void)HandleModUsrImg:(struct tagMMModUserImg*)arg1;
-(void)HandleModUsrInfo:(struct tagMMModUserInfo*)arg1;
-(void)HandleModContact:(struct tagMMModContact*)arg1 Cmd:(unsigned long)arg2;
-(id)init;
-(void)dealloc;
@end