/* Generated by RuntimeBrowser.
 */

@protocol TSPPackageDataWriter <NSObject>

@required

- (struct CGDataConsumer { }*)newCGDataConsumerAtRelativePath:(NSString *)arg1;
- (bool)writeData:(NSData *)arg1 toRelativePath:(NSString *)arg2 allowEncryption:(bool)arg3 error:(id*)arg4;

@end
