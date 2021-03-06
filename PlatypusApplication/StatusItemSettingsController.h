/*
 Platypus - program for creating Mac OS X application wrappers around scripts
 Copyright (C) 2003-2012 Sveinbjorn Thordarson <sveinbjornt@gmail.com>
 
 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 
 */

#import <Cocoa/Cocoa.h>
#import "PlatypusUtility.h"

@interface StatusItemSettingsController : NSObject
{
	IBOutlet id window;
	IBOutlet id statusItemSettingsWindow;
	IBOutlet id displayTypePopup;
	IBOutlet id iconImageView;
	IBOutlet id selectIconButton;
	IBOutlet id titleTextField;
	IBOutlet id titleLabel;
	IBOutlet id iconLabel;
	
	NSStatusItem *pStatusItem;
}
- (IBAction)show:(id)sender;
- (IBAction)close:(id)sender;
- (IBAction)restoreDefaults:(id)sender;
- (IBAction)statusItemDisplayTypeChanged:(id)sender;
- (IBAction)selectStatusItemIcon:(id)sender;
- (IBAction)previewStatusItem:(id)sender;
- (void)setDisplayType: (NSString *)name;
- (NSString *)displayType;
- (void)killStatusItem;
- (BOOL)showingStatusItem;
- (NSString *)title;
- (void)setTitle: (NSString *)title;
- (NSImage *)icon;
- (void)setIcon: (NSImage *)img;

@end
