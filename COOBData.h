/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:39:19 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface COOBData : NSObject {
	unsigned m_uiType; 
	unsigned m_uiTime; 
	NSString* m_nsIPPort; 
}
@property (nonatomic,retain) NSString* m_nsIPPort; 
@property (assign,nonatomic) unsigned m_uiTime; 
@property (assign,nonatomic) unsigned m_uiType; 
-(void)setM_uiType:(unsigned long)arg1;
-(void)setM_nsIPPort:(id)arg1;
-(void)setM_uiTime:(unsigned long)arg1;
-(void)LoadDataFromOOBData:(id)arg1;
-(id)init;
-(void)dealloc;
@end