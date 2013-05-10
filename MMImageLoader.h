/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:39:22 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <MMService.h>

@interface MMImageLoader : MMService <MMService> {
	NSMutableDictionary* _dicImageUrlLoaderConnections; 
	NSMutableDictionary* _dicImageDatas; 
	NSMutableDictionary* _dicImageCaches; 
	struct dispatch_queue_s* _request_queue; 
}
-(BOOL)onServiceMemoryWarning;
-(void)onServiceInit;
-(BOOL)isImageLoaded:(id)arg1;
-(void)cancelLoadForURL:(id)arg1 oberver:(id)arg2;
-(void)loadImageForURL:(id)arg1 observer:(id)arg2;
-(id)imageForURL:(id)arg1;
-(void)connection:(id)arg1 didFailWithError:(id)arg2;
-(void)connection:(id)arg1 didReceiveData:(id)arg2;
-(void)connectionDidFinishLoading:(id)arg1;
-(void)dealloc;
@end