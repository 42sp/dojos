// Created by PHIND AI
const xpm2png = require('xpm2png');
const fs = require('fs');
const path = require('path');

async function convertXpmToPng(inputPath) {
	const parsedPath = path.parse(inputPath);
	const outputPath = path.format({
		dir: parsedPath.dir,
		name: parsedPath.name,
		ext: '.png'
	});

	const exists = await fs.existsSync(outputPath);
	if (exists) {
		return console.log('Output file already exists');
	}

	const img = await xpm2png(inputPath, false);
	await img.writeAsync(outputPath);
	console.log('Conversion completed');
}

if (process.argv.length < 3) {
	console.log('Please provide the path to the XPM file');
	process.exit(1);
}

convertXpmToPng(process.argv[2]);
