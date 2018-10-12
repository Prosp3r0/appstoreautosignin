/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSCircularBuffer : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableArray * _buffer;
    unsigned int  _currentIndex;
    unsigned int  _maxSize;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) NSMutableArray *buffer;
@property (nonatomic, readonly) unsigned int count;
@property (nonatomic) unsigned int currentIndex;
@property (nonatomic) unsigned int maxSize;

+ (id)_rearrangeObjects:(id)arg1 forCurrentIndex:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)_flush;
- (id)accessQueue;
- (void)addObject:(id)arg1;
- (id)allObjects;
- (id)buffer;
- (unsigned int)count;
- (unsigned int)currentIndex;
- (id)description;
- (id)flush;
- (id)init;
- (id)initWithMaxSize:(unsigned int)arg1;
- (unsigned int)maxSize;
- (void)setAccessQueue:(id)arg1;
- (void)setBuffer:(id)arg1;
- (void)setCurrentIndex:(unsigned int)arg1;
- (void)setMaxSize:(unsigned int)arg1;

@end
