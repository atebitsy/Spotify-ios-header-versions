//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUELabelStyle, GLUETableViewStyle, NSString, SPTListenTogetherBetaLabelStyle, SPTSocialListeningSessionFacepileItemViewStyle, SPTSocialListeningSessionScannableViewStyle, SPTSocialListeningSessionViewPlaceholderCellStyle, SPTSocialListeningSessionViewUserCellStyle, UIColor;

@interface SPTSocialListeningSessionViewStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    GLUELabelStyle *_titleLabelStyle;
    GLUELabelStyle *_descriptionLabelStyle;
    GLUELabelStyle *_privacyDisclaimerLabelStyle;
    SPTSocialListeningSessionScannableViewStyle *_scannableViewStyle;
    GLUELabelStyle *_tryAgainLabelStyle;
    GLUEButtonStyle *_tryAgainButtonStyle;
    GLUEButtonStyle *_scanCodeButtonStyle;
    GLUEButtonStyle *_leaveSessionButtonStyle;
    GLUETableViewStyle *_participantsTableViewStyle;
    SPTSocialListeningSessionViewUserCellStyle *_participantsTableViewCellStyle;
    SPTSocialListeningSessionViewPlaceholderCellStyle *_participantsPlaceholderCellStyle;
    SPTSocialListeningSessionFacepileItemViewStyle *_facepileItemViewStyle;
    GLUEButtonStyle *_startSessionButtonStyle;
    SPTListenTogetherBetaLabelStyle *_betaLabelStyle;
    GLUEButtonStyle *_seeListenersButtonStyle;
}

@property(copy, nonatomic) GLUEButtonStyle *seeListenersButtonStyle; // @synthesize seeListenersButtonStyle=_seeListenersButtonStyle;
@property(copy, nonatomic) SPTListenTogetherBetaLabelStyle *betaLabelStyle; // @synthesize betaLabelStyle=_betaLabelStyle;
@property(copy, nonatomic) GLUEButtonStyle *startSessionButtonStyle; // @synthesize startSessionButtonStyle=_startSessionButtonStyle;
@property(copy, nonatomic) SPTSocialListeningSessionFacepileItemViewStyle *facepileItemViewStyle; // @synthesize facepileItemViewStyle=_facepileItemViewStyle;
@property(copy, nonatomic) SPTSocialListeningSessionViewPlaceholderCellStyle *participantsPlaceholderCellStyle; // @synthesize participantsPlaceholderCellStyle=_participantsPlaceholderCellStyle;
@property(copy, nonatomic) SPTSocialListeningSessionViewUserCellStyle *participantsTableViewCellStyle; // @synthesize participantsTableViewCellStyle=_participantsTableViewCellStyle;
@property(copy, nonatomic) GLUETableViewStyle *participantsTableViewStyle; // @synthesize participantsTableViewStyle=_participantsTableViewStyle;
@property(copy, nonatomic) GLUEButtonStyle *leaveSessionButtonStyle; // @synthesize leaveSessionButtonStyle=_leaveSessionButtonStyle;
@property(copy, nonatomic) GLUEButtonStyle *scanCodeButtonStyle; // @synthesize scanCodeButtonStyle=_scanCodeButtonStyle;
@property(copy, nonatomic) GLUEButtonStyle *tryAgainButtonStyle; // @synthesize tryAgainButtonStyle=_tryAgainButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *tryAgainLabelStyle; // @synthesize tryAgainLabelStyle=_tryAgainLabelStyle;
@property(copy, nonatomic) SPTSocialListeningSessionScannableViewStyle *scannableViewStyle; // @synthesize scannableViewStyle=_scannableViewStyle;
@property(copy, nonatomic) GLUELabelStyle *privacyDisclaimerLabelStyle; // @synthesize privacyDisclaimerLabelStyle=_privacyDisclaimerLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *descriptionLabelStyle; // @synthesize descriptionLabelStyle=_descriptionLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToSocialListeningSessionViewStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFont:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

