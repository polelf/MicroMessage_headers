/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:38:59 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SafeDeviceList : PBGeneratedMessage {
	unsigned int hasCount:1; 
	unsigned count; 
	NSMutableArray* mutableListList; 
}
@property (retain) NSMutableArray* mutableListList; 
@property (assign) unsigned count; 
@property (assign) BOOL hasCount; 
+(id)parseFromData:(id)arg1;
-(id)listList;
-(int)serializedSize;
-(void)writeToCodedOutputStream:(id)arg1;
-(id)mergeFromCodedInputStream:(id)arg1;
-(void)setHasCount:(BOOL)arg1;
-(id)SetCount:(unsigned)arg1;
-(void)setMutableListList:(id)arg1;
-(id)addListFromArray:(id)arg1;
-(void)setCount:(unsigned)arg1;
-(id)addList:(id)arg1;
-(id)init;
-(void)dealloc;
@end