/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:39:19 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CAESCrypt : NSObject {
}
+(id)AESDecryptWithKey:(id)arg1 Data:(id)arg2;
+(id)AESEncryptWithKey:(id)arg1 Data:(id)arg2;
+(id)AESECBDecryptWithKey:(id)arg1 Data:(id)arg2 Final:(BOOL)arg3;
+(id)AESECBEncryptWithKey:(id)arg1 Data:(id)arg2 Final:(BOOL)arg3;
-(id)init;
-(void)dealloc;
@end