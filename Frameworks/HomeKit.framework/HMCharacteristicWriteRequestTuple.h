/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@class HMCharacteristic;

@interface HMCharacteristicWriteRequestTuple : NSObject {
    HMCharacteristic *_characteristic;
    id _value;
}

@property(readonly) HMCharacteristic * characteristic;
@property(readonly) id value;

+ (id)tupleWithCharacteristic:(id)arg1 value:(id)arg2;

- (void).cxx_destruct;
- (id)characteristic;
- (id)value;

@end
