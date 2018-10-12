/* Generated by RuntimeBrowser.
 */

@protocol PKContinuityPaymentServiceDelegate <NSObject>

@optional

- (void)didReceiveCancellationForRemotePaymentRequest:(PKRemotePaymentRequest *)arg1;
- (void)didReceivePayment:(PKPayment *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2;
- (void)didReceivePaymentClientUpdate:(PKPaymentClientUpdate *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2;
- (void)didReceivePaymentHostUpdate:(PKPaymentHostUpdate *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2;
- (void)didReceivePaymentStatus:(long long)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2;
- (void)didReceiveUpdatedPaymentDevices:(NSArray *)arg1;

@end
