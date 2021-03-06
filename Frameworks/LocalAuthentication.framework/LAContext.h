/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
 */

@class LAClient, NSData, NSString;

@interface LAContext : NSObject {
    BOOL _cancelButtonVisible;
    LAClient *_client;
    NSString *_creatorDisplayName;
    NSData *_externalizedContext;
    BOOL _fallbackButtonVisible;
    NSString *_localizedFallbackTitle;
}

@property(getter=isCancelButtonVisible) BOOL cancelButtonVisible;
@property(retain) NSString * creatorDisplayName;
@property(retain) NSData * externalizedContext;
@property(getter=isFallbackButtonVisible) BOOL fallbackButtonVisible;
@property(copy) NSString * localizedFallbackTitle;

- (void).cxx_destruct;
- (BOOL)canEvaluatePolicy:(int)arg1 error:(id*)arg2;
- (id)creatorDisplayName;
- (void)enterPassword:(id)arg1 reply:(id)arg2;
- (void)evaluatePolicy:(int)arg1 localizedReason:(id)arg2 reply:(id)arg3;
- (id)evaluatePolicy:(int)arg1 options:(id)arg2 error:(id*)arg3;
- (void)evaluatePolicy:(int)arg1 options:(id)arg2 reply:(id)arg3;
- (id)externalizedContext;
- (void)failProcessedEvent:(int)arg1 failureError:(id)arg2 reply:(id)arg3;
- (id)init;
- (id)initWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2;
- (id)initWithExternalizedContext:(id)arg1;
- (id)initWithUIDelegate:(id)arg1;
- (void)invalidate;
- (BOOL)isCancelButtonVisible;
- (BOOL)isFallbackButtonVisible;
- (id)localizedFallbackTitle;
- (void)setCancelButtonVisible:(BOOL)arg1;
- (void)setCreatorDisplayName:(id)arg1;
- (void)setExternalizedContext:(id)arg1;
- (void)setFallbackButtonVisible:(BOOL)arg1;
- (void)setLocalizedFallbackTitle:(id)arg1;

@end
