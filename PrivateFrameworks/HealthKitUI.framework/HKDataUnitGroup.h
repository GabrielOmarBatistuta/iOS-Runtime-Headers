/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class HKCorrelationType, NSArray, NSMutableDictionary, NSString, UIColor, UIImage;

@interface HKDataUnitGroup : NSObject {
    unsigned long long _categoryID;
    long long _chartStyle;
    HKCorrelationType *_correlationType;
    unsigned long long _dataUnitGroupID;
    NSArray *_dataUnits;
    NSMutableDictionary *_dataUnitsByType;
    NSArray *_dataUnitsOrderedForDataEntry;
    UIImage *_detailImage;
    NSString *_displayName;
    NSString *_embeddedDisplayName;
    UIColor *_gradientEndColor;
    UIColor *_gradientStartColor;
    NSString *_joinString;
    NSString *_keywords;
    NSArray *_reversedDataUnits;
    NSString *_summary;
    bool_isCharacteristic;
    bool_isNikeFuel;
    bool_isSleep;
}

@property(readonly) unsigned long long categoryID;
@property(readonly) long long chartStyle;
@property(readonly) HKCorrelationType * correlationType;
@property(readonly) unsigned long long dataUnitGroupID;
@property(readonly) NSArray * dataUnits;
@property(readonly) NSArray * dataUnitsOrderedForDataEntry;
@property(readonly) UIImage * detailImage;
@property(readonly) NSString * displayName;
@property(readonly) NSString * embeddedDisplayName;
@property(readonly) UIColor * gradientEndColor;
@property(readonly) UIColor * gradientStartColor;
@property(readonly) UIImage * groupIcon;
@property(readonly) NSString * joinString;
@property(readonly) NSString * keywords;
@property(readonly) UIImage * shareIcon;
@property(readonly) NSString * summary;
@property(readonly) UIImage * unitIcon;

- (void).cxx_destruct;
- (long long)_chartStyleFromDictionary:(id)arg1;
- (unsigned long long)categoryID;
- (long long)chartStyle;
- (id)correlationType;
- (id)dataUnitForType:(id)arg1;
- (unsigned long long)dataUnitGroupID;
- (id)dataUnits;
- (id)dataUnitsOrderedForDataEntry;
- (id)detailImage;
- (id)displayName;
- (id)embeddedDisplayName;
- (id)gradientEndColor;
- (id)gradientStartColor;
- (id)groupIcon;
- (unsigned long long)hash;
- (id)init;
- (id)initFromDictionary:(id)arg1;
- (bool)isCharacteristic;
- (bool)isEqual:(id)arg1;
- (bool)isNikeFuel;
- (bool)isSleep;
- (id)joinString;
- (id)keywords;
- (id)shareIcon;
- (id)summary;
- (id)unitIcon;

@end